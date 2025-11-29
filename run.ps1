param(
    [Parameter(Mandatory=$true)]
    [string]$cppFile
)

cls

# Compile the passed C++ file
cl $cppFile

# If compile succeeds, run the generated exe
if ($LASTEXITCODE -eq 0) {
    $exe = $cppFile -replace "\.cpp$", ".exe"

    if (Test-Path $exe) {
        cls
        Write-Host "✅ Running EXE: $exe"
        & $exe

        # After running, delete exe and obj
        $obj = $cppFile -replace "\.cpp$", ".obj"
        Remove-Item $exe -Force -ErrorAction SilentlyContinue
        Remove-Item $obj -Force -ErrorAction SilentlyContinue
    } else {
        Write-Host "❌ EXE not found: $exe"
    }
} else {
    Write-Host "❌ Compilation failed."
}
