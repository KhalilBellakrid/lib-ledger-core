protoc -I ../core/proto --js_out=import_style=commonjs,binary:./messages ../core/proto/messages.proto ../core/proto/bitcoin_like.proto ../core/proto/services.proto