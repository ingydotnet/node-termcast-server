#ifndef VTCHANGES_H
#define VTCHANGES_H

#include <node.h>

extern "C" {
// FIXME ugh this is ugly. any way around this?
#include "../deps/libvterm/src/vterm_internal.h"
#include <vterm.h>
}

class VTChanges : public node::ObjectWrap {
 public:
  static void Init();
  static v8::Handle<v8::Value> NewInstance(const v8::Arguments& args);

 private:
  VTChanges();
  ~VTChanges();

  static v8::Persistent<v8::Function> constructor;
  static v8::Handle<v8::Value> New(const v8::Arguments& args);
  static v8::Handle<v8::Value> Process(const v8::Arguments& args);
  static v8::Handle<v8::Value> Finish(const v8::Arguments& args);
  VTerm *vt;
};

#endif
