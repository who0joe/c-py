import pathlib
import sys
import platform
import time
import os

# START
starttime = time.time()

print(f"platform: {platform.architecture()}")

print("Previous_PATH")
print("\n".join(sys.path))

sys.path.append(str(pathlib.Path().absolute()))

print("PATH")
print("\n".join(sys.path))

# END Elapsed
print(time.time() - starttime)

# how to send shell script
os.system("echo test")
