cls

# Delete build/test artifacts in current directory
Remove-Item *.exe -Force -ErrorAction SilentlyContinue
Remove-Item *.obj -Force -ErrorAction SilentlyContinue
Remove-Item *.log -Force -ErrorAction SilentlyContinue
Remove-Item *.pdb -Force -ErrorAction SilentlyContinue
Remove-Item *~     -Force -ErrorAction SilentlyContinue
Remove-Item *.ilk -Force -ErrorAction SilentlyContinue
Remove-Item *.pdb -Force -ErrorAction SilentlyContinue