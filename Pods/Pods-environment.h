
// To check if a library is compiled with CocoaPods you
// can use the `COCOAPODS` macro definition which is
// defined in the xcconfigs so it is available in
// headers also when they are imported in the client
// project.


// AFNetworking
#define COCOAPODS_POD_AVAILABLE_AFNetworking
#define COCOAPODS_VERSION_MAJOR_AFNetworking 1
#define COCOAPODS_VERSION_MINOR_AFNetworking 3
#define COCOAPODS_VERSION_PATCH_AFNetworking 3

// FMDB
#define COCOAPODS_POD_AVAILABLE_FMDB
#define COCOAPODS_VERSION_MAJOR_FMDB 2
#define COCOAPODS_VERSION_MINOR_FMDB 1
#define COCOAPODS_VERSION_PATCH_FMDB 0

// FMDB/common
#define COCOAPODS_POD_AVAILABLE_FMDB_common
#define COCOAPODS_VERSION_MAJOR_FMDB_common 2
#define COCOAPODS_VERSION_MINOR_FMDB_common 1
#define COCOAPODS_VERSION_PATCH_FMDB_common 0

// FMDB/standard
#define COCOAPODS_POD_AVAILABLE_FMDB_standard
#define COCOAPODS_VERSION_MAJOR_FMDB_standard 2
#define COCOAPODS_VERSION_MINOR_FMDB_standard 1
#define COCOAPODS_VERSION_PATCH_FMDB_standard 0

// JSONKit
#define COCOAPODS_POD_AVAILABLE_JSONKit
// This library does not follow semantic-versioning,
// so we were not able to define version macros.
// Please contact the author.
// Version: 1.5pre.

