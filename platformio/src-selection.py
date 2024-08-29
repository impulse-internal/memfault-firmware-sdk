# Select the proper sources at build time.
#
# The selection is done according to the MEMFAULT_COMPONENTS macros.
# If it is not set, it defaults to "core util panics metrics".

Import("env")

cppdefines = env.get("CPPDEFINES", [])

components = "core util panics metrics"

for item in cppdefines:
    if item[0] == "MEMFAULT_COMPONENTS":
        components = item[1]
        break

src_filter = ["-<*>"]
for component in components.split():
    src_filter += ["+<components/{}/**/*.c>".format(component)]

env.Replace(SRC_FILTER=src_filter)
