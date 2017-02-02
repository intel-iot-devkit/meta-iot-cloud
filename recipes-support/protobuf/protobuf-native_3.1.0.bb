inherit native autotools
require protobuf.inc

EXTRA_OECONF += " --with-protoc=echo"