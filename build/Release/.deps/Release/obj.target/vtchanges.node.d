cmd_Release/obj.target/vtchanges.node := flock ./Release/linker.lock g++ -shared -pthread -rdynamic -m64  -Wl,-soname=vtchanges.node -o Release/obj.target/vtchanges.node -Wl,--start-group Release/obj.target/vtchanges/src/addon.o Release/obj.target/vtchanges/src/vtchanges.o Release/obj.target/deps/libvterm/libvterm.a -Wl,--end-group 
