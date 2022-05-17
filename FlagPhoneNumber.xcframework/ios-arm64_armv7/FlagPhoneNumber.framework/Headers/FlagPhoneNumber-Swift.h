#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef FLAGPHONENUMBER_SWIFT_H
#define FLAGPHONENUMBER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FlagPhoneNumber",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@interface NSBundle (SWIFT_EXTENSION(FlagPhoneNumber))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSBundle * _Nonnull FlagIcons;)
+ (NSBundle * _Nonnull)FlagIcons SWIFT_WARN_UNUSED_RESULT;
+ (void)setFlagIcons:(NSBundle * _Nonnull)value;
+ (NSBundle * _Nonnull)FlagPhoneNumber SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;
@class UISearchController;
@class NSString;
@class NSCoder;

SWIFT_CLASS("_TtC15FlagPhoneNumber28FPNCountryListViewController")
@interface FPNCountryListViewController : UITableViewController <UISearchControllerDelegate, UISearchResultsUpdating>
- (void)viewDidLoad;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)updateSearchResultsForSearchController:(UISearchController * _Nonnull)searchController;
- (void)willDismissSearchController:(UISearchController * _Nonnull)searchController;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_CLASS("_TtC15FlagPhoneNumber16FPNCountryPicker")
@interface FPNCountryPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, FPNFormat, closed) {
  FPNFormatE164 = 0,
  FPNFormatInternational = 1,
  FPNFormatNational = 2,
  FPNFormatRFC3966 = 3,
};

typedef SWIFT_ENUM(NSInteger, FPNOBJCCountryKey, closed) {
  FPNOBJCCountryKeyAF = 0,
  FPNOBJCCountryKeyZA = 1,
  FPNOBJCCountryKeyAL = 2,
  FPNOBJCCountryKeyDZ = 3,
  FPNOBJCCountryKeyDE = 4,
  FPNOBJCCountryKeyAD = 5,
  FPNOBJCCountryKeyAO = 6,
  FPNOBJCCountryKeyAI = 7,
  FPNOBJCCountryKeyAG = 8,
  FPNOBJCCountryKeySA = 9,
  FPNOBJCCountryKeyAR = 10,
  FPNOBJCCountryKeyAM = 11,
  FPNOBJCCountryKeyAW = 12,
  FPNOBJCCountryKeyAU = 13,
  FPNOBJCCountryKeyAT = 14,
  FPNOBJCCountryKeyAZ = 15,
  FPNOBJCCountryKeyBS = 16,
  FPNOBJCCountryKeyBH = 17,
  FPNOBJCCountryKeyBD = 18,
  FPNOBJCCountryKeyBB = 19,
  FPNOBJCCountryKeyBE = 20,
  FPNOBJCCountryKeyBZ = 21,
  FPNOBJCCountryKeyBM = 22,
  FPNOBJCCountryKeyBT = 23,
  FPNOBJCCountryKeyBY = 24,
  FPNOBJCCountryKeyBO = 25,
  FPNOBJCCountryKeyBA = 26,
  FPNOBJCCountryKeyBW = 27,
  FPNOBJCCountryKeyBN = 28,
  FPNOBJCCountryKeyBR = 29,
  FPNOBJCCountryKeyBG = 30,
  FPNOBJCCountryKeyBF = 31,
  FPNOBJCCountryKeyBI = 32,
  FPNOBJCCountryKeyBJ = 33,
  FPNOBJCCountryKeyKH = 34,
  FPNOBJCCountryKeyCM = 35,
  FPNOBJCCountryKeyCA = 36,
  FPNOBJCCountryKeyCV = 37,
  FPNOBJCCountryKeyCL = 38,
  FPNOBJCCountryKeyCN = 39,
  FPNOBJCCountryKeyCY = 40,
  FPNOBJCCountryKeyCO = 41,
  FPNOBJCCountryKeyKM = 42,
  FPNOBJCCountryKeyCG = 43,
  FPNOBJCCountryKeyCD = 44,
  FPNOBJCCountryKeyKP = 45,
  FPNOBJCCountryKeyKR = 46,
  FPNOBJCCountryKeyCR = 47,
  FPNOBJCCountryKeyHR = 48,
  FPNOBJCCountryKeyCU = 49,
  FPNOBJCCountryKeyCI = 50,
  FPNOBJCCountryKeyDK = 51,
  FPNOBJCCountryKeyDJ = 52,
  FPNOBJCCountryKeyDM = 53,
  FPNOBJCCountryKeyES = 54,
  FPNOBJCCountryKeyEE = 55,
  FPNOBJCCountryKeyFJ = 56,
  FPNOBJCCountryKeyFI = 57,
  FPNOBJCCountryKeyFR = 58,
  FPNOBJCCountryKeyGA = 59,
  FPNOBJCCountryKeyGM = 60,
  FPNOBJCCountryKeyGH = 61,
  FPNOBJCCountryKeyGI = 62,
  FPNOBJCCountryKeyGD = 63,
  FPNOBJCCountryKeyGL = 64,
  FPNOBJCCountryKeyGR = 65,
  FPNOBJCCountryKeyGP = 66,
  FPNOBJCCountryKeyGU = 67,
  FPNOBJCCountryKeyGT = 68,
  FPNOBJCCountryKeyGG = 69,
  FPNOBJCCountryKeyGN = 70,
  FPNOBJCCountryKeyGQ = 71,
  FPNOBJCCountryKeyGW = 72,
  FPNOBJCCountryKeyGY = 73,
  FPNOBJCCountryKeyGF = 74,
  FPNOBJCCountryKeyGE = 75,
  FPNOBJCCountryKeyHT = 76,
  FPNOBJCCountryKeyHN = 77,
  FPNOBJCCountryKeyHK = 78,
  FPNOBJCCountryKeyHU = 79,
  FPNOBJCCountryKeyIN = 80,
  FPNOBJCCountryKeyID = 81,
  FPNOBJCCountryKeyIQ = 82,
  FPNOBJCCountryKeyIR = 83,
  FPNOBJCCountryKeyIE = 84,
  FPNOBJCCountryKeyIS = 85,
  FPNOBJCCountryKeyIL = 86,
  FPNOBJCCountryKeyIT = 87,
  FPNOBJCCountryKeyJM = 88,
  FPNOBJCCountryKeyJP = 89,
  FPNOBJCCountryKeyJE = 90,
  FPNOBJCCountryKeyJO = 91,
  FPNOBJCCountryKeyKZ = 92,
  FPNOBJCCountryKeyKE = 93,
  FPNOBJCCountryKeyKG = 94,
  FPNOBJCCountryKeyKI = 95,
  FPNOBJCCountryKeyKW = 96,
  FPNOBJCCountryKeyRE = 97,
  FPNOBJCCountryKeyLA = 98,
  FPNOBJCCountryKeyLS = 99,
  FPNOBJCCountryKeyLV = 100,
  FPNOBJCCountryKeyLB = 101,
  FPNOBJCCountryKeyLY = 102,
  FPNOBJCCountryKeyLR = 103,
  FPNOBJCCountryKeyLI = 104,
  FPNOBJCCountryKeyLT = 105,
  FPNOBJCCountryKeyLU = 106,
  FPNOBJCCountryKeyMO = 107,
  FPNOBJCCountryKeyMK = 108,
  FPNOBJCCountryKeyMG = 109,
  FPNOBJCCountryKeyMY = 110,
  FPNOBJCCountryKeyMW = 111,
  FPNOBJCCountryKeyMV = 112,
  FPNOBJCCountryKeyML = 113,
  FPNOBJCCountryKeyMT = 114,
  FPNOBJCCountryKeyMA = 115,
  FPNOBJCCountryKeyMQ = 116,
  FPNOBJCCountryKeyMU = 117,
  FPNOBJCCountryKeyMR = 118,
  FPNOBJCCountryKeyYT = 119,
  FPNOBJCCountryKeyMX = 120,
  FPNOBJCCountryKeyMD = 121,
  FPNOBJCCountryKeyMC = 122,
  FPNOBJCCountryKeyMN = 123,
  FPNOBJCCountryKeyMS = 124,
  FPNOBJCCountryKeyME = 125,
  FPNOBJCCountryKeyMZ = 126,
  FPNOBJCCountryKeyMM = 127,
  FPNOBJCCountryKeyNA = 128,
  FPNOBJCCountryKeyNR = 129,
  FPNOBJCCountryKeyNI = 130,
  FPNOBJCCountryKeyNE = 131,
  FPNOBJCCountryKeyNG = 132,
  FPNOBJCCountryKeyNU = 133,
  FPNOBJCCountryKeyNO = 134,
  FPNOBJCCountryKeyNC = 135,
  FPNOBJCCountryKeyNZ = 136,
  FPNOBJCCountryKeyNP = 137,
  FPNOBJCCountryKeyOM = 138,
  FPNOBJCCountryKeyUG = 139,
  FPNOBJCCountryKeyUZ = 140,
  FPNOBJCCountryKeyPK = 141,
  FPNOBJCCountryKeyPW = 142,
  FPNOBJCCountryKeyPA = 143,
  FPNOBJCCountryKeyPG = 144,
  FPNOBJCCountryKeyPY = 145,
  FPNOBJCCountryKeyNL = 146,
  FPNOBJCCountryKeyPH = 147,
  FPNOBJCCountryKeyPL = 148,
  FPNOBJCCountryKeyPF = 149,
  FPNOBJCCountryKeyPR = 150,
  FPNOBJCCountryKeyPT = 151,
  FPNOBJCCountryKeyPE = 152,
  FPNOBJCCountryKeyQA = 153,
  FPNOBJCCountryKeyRO = 154,
  FPNOBJCCountryKeyGB = 155,
  FPNOBJCCountryKeyRU = 156,
  FPNOBJCCountryKeyRW = 157,
  FPNOBJCCountryKeyCF = 158,
  FPNOBJCCountryKeyDO = 159,
  FPNOBJCCountryKeyBL = 160,
  FPNOBJCCountryKeyKN = 161,
  FPNOBJCCountryKeySM = 162,
  FPNOBJCCountryKeyMF = 163,
  FPNOBJCCountryKeyPM = 164,
  FPNOBJCCountryKeyVC = 165,
  FPNOBJCCountryKeySH = 166,
  FPNOBJCCountryKeyLC = 167,
  FPNOBJCCountryKeySV = 168,
  FPNOBJCCountryKeyWS = 169,
  FPNOBJCCountryKeyAS = 170,
  FPNOBJCCountryKeyST = 171,
  FPNOBJCCountryKeyRS = 172,
  FPNOBJCCountryKeySC = 173,
  FPNOBJCCountryKeySL = 174,
  FPNOBJCCountryKeySG = 175,
  FPNOBJCCountryKeySK = 176,
  FPNOBJCCountryKeySI = 177,
  FPNOBJCCountryKeySO = 178,
  FPNOBJCCountryKeySD = 179,
  FPNOBJCCountryKeySS = 180,
  FPNOBJCCountryKeyLK = 181,
  FPNOBJCCountryKeyCH = 182,
  FPNOBJCCountryKeySR = 183,
  FPNOBJCCountryKeySE = 184,
  FPNOBJCCountryKeySJ = 185,
  FPNOBJCCountryKeySZ = 186,
  FPNOBJCCountryKeySY = 187,
  FPNOBJCCountryKeySN = 188,
  FPNOBJCCountryKeyTJ = 189,
  FPNOBJCCountryKeyTZ = 190,
  FPNOBJCCountryKeyTW = 191,
  FPNOBJCCountryKeyTD = 192,
  FPNOBJCCountryKeyCZ = 193,
  FPNOBJCCountryKeyIO = 194,
  FPNOBJCCountryKeyPS = 195,
  FPNOBJCCountryKeyTH = 196,
  FPNOBJCCountryKeyTL = 197,
  FPNOBJCCountryKeyTG = 198,
  FPNOBJCCountryKeyTK = 199,
  FPNOBJCCountryKeyTO = 200,
  FPNOBJCCountryKeyTT = 201,
  FPNOBJCCountryKeyTN = 202,
  FPNOBJCCountryKeyTM = 203,
  FPNOBJCCountryKeyTR = 204,
  FPNOBJCCountryKeyTV = 205,
  FPNOBJCCountryKeyUA = 206,
  FPNOBJCCountryKeyUY = 207,
  FPNOBJCCountryKeyVU = 208,
  FPNOBJCCountryKeyVE = 209,
  FPNOBJCCountryKeyVN = 210,
  FPNOBJCCountryKeyWF = 211,
  FPNOBJCCountryKeyYE = 212,
  FPNOBJCCountryKeyZM = 213,
  FPNOBJCCountryKeyZW = 214,
  FPNOBJCCountryKeyEG = 215,
  FPNOBJCCountryKeyAE = 216,
  FPNOBJCCountryKeyEC = 217,
  FPNOBJCCountryKeyER = 218,
  FPNOBJCCountryKeyVA = 219,
  FPNOBJCCountryKeyFM = 220,
  FPNOBJCCountryKeyUS = 221,
  FPNOBJCCountryKeyET = 222,
  FPNOBJCCountryKeyCX = 223,
  FPNOBJCCountryKeyNF = 224,
  FPNOBJCCountryKeyIM = 225,
  FPNOBJCCountryKeyKY = 226,
  FPNOBJCCountryKeyCC = 227,
  FPNOBJCCountryKeyCK = 228,
  FPNOBJCCountryKeyFO = 229,
  FPNOBJCCountryKeyFK = 230,
  FPNOBJCCountryKeyMP = 231,
  FPNOBJCCountryKeyMH = 232,
  FPNOBJCCountryKeySB = 233,
  FPNOBJCCountryKeyTC = 234,
  FPNOBJCCountryKeyVG = 235,
  FPNOBJCCountryKeyVI = 236,
  FPNOBJCCountryKeyAX = 237,
};

@class UIFont;
@class UIColor;
enum FPNDisplayMode : NSInteger;

SWIFT_CLASS("_TtC15FlagPhoneNumber12FPNTextField")
@interface FPNTextField : UITextField
/// The size of the flag button
@property (nonatomic) CGSize flagButtonSize;
@property (nonatomic, strong) UIFont * _Nullable font;
@property (nonatomic, strong) UIColor * _Nullable textColor;
/// Present in the placeholder an example of a phone number according to the selected country code.
/// If false, you can set your own placeholder. Set to true by default.
@property (nonatomic) BOOL hasPhoneNumberExample;
/// Input Accessory View for the texfield
@property (nonatomic, strong) UIView * _Nullable textFieldInputAccessoryView;
@property (nonatomic) enum FPNDisplayMode displayMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateConstraints;
- (CGRect)leftViewRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
/// For Objective-C, Get the current formatted phone number
- (NSString * _Nullable)getFormattedPhoneNumberWithFormat:(NSInteger)format SWIFT_WARN_UNUSED_RESULT;
/// Get the current raw phone number
- (NSString * _Nullable)getRawPhoneNumber SWIFT_WARN_UNUSED_RESULT;
/// Set directly the phone number. e.g “+33612345678”
- (void)setWithPhoneNumber:(NSString * _Nonnull)phoneNumber;
/// Set the country image according to country code. Example “FR”
- (void)setFlagWithKey:(enum FPNOBJCCountryKey)key;
/// Set the country list excluding the provided countries
- (void)setCountriesWithExcluding:(NSArray<NSNumber *> * _Nonnull)countries;
/// Set the country list including the provided countries
- (void)setCountriesIncluding:(NSArray<NSNumber *> * _Nonnull)countries;
@end

typedef SWIFT_ENUM(NSInteger, FPNDisplayMode, closed) {
  FPNDisplayModePicker = 0,
  FPNDisplayModeList = 1,
};


SWIFT_PROTOCOL("_TtP15FlagPhoneNumber20FPNTextFieldDelegate_")
@protocol FPNTextFieldDelegate <UITextFieldDelegate>
- (void)fpnDidSelectCountryWithName:(NSString * _Nonnull)name dialCode:(NSString * _Nonnull)dialCode code:(NSString * _Nonnull)code;
- (void)fpnDidValidatePhoneNumberWithTextField:(FPNTextField * _Nonnull)textField isValid:(BOOL)isValid;
- (void)fpnDisplayCountryList;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.6 (swiftlang-5.6.0.323.62 clang-1316.0.20.8)
#ifndef FLAGPHONENUMBER_SWIFT_H
#define FLAGPHONENUMBER_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="FlagPhoneNumber",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


@interface NSBundle (SWIFT_EXTENSION(FlagPhoneNumber))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) NSBundle * _Nonnull FlagIcons;)
+ (NSBundle * _Nonnull)FlagIcons SWIFT_WARN_UNUSED_RESULT;
+ (void)setFlagIcons:(NSBundle * _Nonnull)value;
+ (NSBundle * _Nonnull)FlagPhoneNumber SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;
@class UISearchController;
@class NSString;
@class NSCoder;

SWIFT_CLASS("_TtC15FlagPhoneNumber28FPNCountryListViewController")
@interface FPNCountryListViewController : UITableViewController <UISearchControllerDelegate, UISearchResultsUpdating>
- (void)viewDidLoad;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)updateSearchResultsForSearchController:(UISearchController * _Nonnull)searchController;
- (void)willDismissSearchController:(UISearchController * _Nonnull)searchController;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;

SWIFT_CLASS("_TtC15FlagPhoneNumber16FPNCountryPicker")
@interface FPNCountryPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

typedef SWIFT_ENUM(NSInteger, FPNFormat, closed) {
  FPNFormatE164 = 0,
  FPNFormatInternational = 1,
  FPNFormatNational = 2,
  FPNFormatRFC3966 = 3,
};

typedef SWIFT_ENUM(NSInteger, FPNOBJCCountryKey, closed) {
  FPNOBJCCountryKeyAF = 0,
  FPNOBJCCountryKeyZA = 1,
  FPNOBJCCountryKeyAL = 2,
  FPNOBJCCountryKeyDZ = 3,
  FPNOBJCCountryKeyDE = 4,
  FPNOBJCCountryKeyAD = 5,
  FPNOBJCCountryKeyAO = 6,
  FPNOBJCCountryKeyAI = 7,
  FPNOBJCCountryKeyAG = 8,
  FPNOBJCCountryKeySA = 9,
  FPNOBJCCountryKeyAR = 10,
  FPNOBJCCountryKeyAM = 11,
  FPNOBJCCountryKeyAW = 12,
  FPNOBJCCountryKeyAU = 13,
  FPNOBJCCountryKeyAT = 14,
  FPNOBJCCountryKeyAZ = 15,
  FPNOBJCCountryKeyBS = 16,
  FPNOBJCCountryKeyBH = 17,
  FPNOBJCCountryKeyBD = 18,
  FPNOBJCCountryKeyBB = 19,
  FPNOBJCCountryKeyBE = 20,
  FPNOBJCCountryKeyBZ = 21,
  FPNOBJCCountryKeyBM = 22,
  FPNOBJCCountryKeyBT = 23,
  FPNOBJCCountryKeyBY = 24,
  FPNOBJCCountryKeyBO = 25,
  FPNOBJCCountryKeyBA = 26,
  FPNOBJCCountryKeyBW = 27,
  FPNOBJCCountryKeyBN = 28,
  FPNOBJCCountryKeyBR = 29,
  FPNOBJCCountryKeyBG = 30,
  FPNOBJCCountryKeyBF = 31,
  FPNOBJCCountryKeyBI = 32,
  FPNOBJCCountryKeyBJ = 33,
  FPNOBJCCountryKeyKH = 34,
  FPNOBJCCountryKeyCM = 35,
  FPNOBJCCountryKeyCA = 36,
  FPNOBJCCountryKeyCV = 37,
  FPNOBJCCountryKeyCL = 38,
  FPNOBJCCountryKeyCN = 39,
  FPNOBJCCountryKeyCY = 40,
  FPNOBJCCountryKeyCO = 41,
  FPNOBJCCountryKeyKM = 42,
  FPNOBJCCountryKeyCG = 43,
  FPNOBJCCountryKeyCD = 44,
  FPNOBJCCountryKeyKP = 45,
  FPNOBJCCountryKeyKR = 46,
  FPNOBJCCountryKeyCR = 47,
  FPNOBJCCountryKeyHR = 48,
  FPNOBJCCountryKeyCU = 49,
  FPNOBJCCountryKeyCI = 50,
  FPNOBJCCountryKeyDK = 51,
  FPNOBJCCountryKeyDJ = 52,
  FPNOBJCCountryKeyDM = 53,
  FPNOBJCCountryKeyES = 54,
  FPNOBJCCountryKeyEE = 55,
  FPNOBJCCountryKeyFJ = 56,
  FPNOBJCCountryKeyFI = 57,
  FPNOBJCCountryKeyFR = 58,
  FPNOBJCCountryKeyGA = 59,
  FPNOBJCCountryKeyGM = 60,
  FPNOBJCCountryKeyGH = 61,
  FPNOBJCCountryKeyGI = 62,
  FPNOBJCCountryKeyGD = 63,
  FPNOBJCCountryKeyGL = 64,
  FPNOBJCCountryKeyGR = 65,
  FPNOBJCCountryKeyGP = 66,
  FPNOBJCCountryKeyGU = 67,
  FPNOBJCCountryKeyGT = 68,
  FPNOBJCCountryKeyGG = 69,
  FPNOBJCCountryKeyGN = 70,
  FPNOBJCCountryKeyGQ = 71,
  FPNOBJCCountryKeyGW = 72,
  FPNOBJCCountryKeyGY = 73,
  FPNOBJCCountryKeyGF = 74,
  FPNOBJCCountryKeyGE = 75,
  FPNOBJCCountryKeyHT = 76,
  FPNOBJCCountryKeyHN = 77,
  FPNOBJCCountryKeyHK = 78,
  FPNOBJCCountryKeyHU = 79,
  FPNOBJCCountryKeyIN = 80,
  FPNOBJCCountryKeyID = 81,
  FPNOBJCCountryKeyIQ = 82,
  FPNOBJCCountryKeyIR = 83,
  FPNOBJCCountryKeyIE = 84,
  FPNOBJCCountryKeyIS = 85,
  FPNOBJCCountryKeyIL = 86,
  FPNOBJCCountryKeyIT = 87,
  FPNOBJCCountryKeyJM = 88,
  FPNOBJCCountryKeyJP = 89,
  FPNOBJCCountryKeyJE = 90,
  FPNOBJCCountryKeyJO = 91,
  FPNOBJCCountryKeyKZ = 92,
  FPNOBJCCountryKeyKE = 93,
  FPNOBJCCountryKeyKG = 94,
  FPNOBJCCountryKeyKI = 95,
  FPNOBJCCountryKeyKW = 96,
  FPNOBJCCountryKeyRE = 97,
  FPNOBJCCountryKeyLA = 98,
  FPNOBJCCountryKeyLS = 99,
  FPNOBJCCountryKeyLV = 100,
  FPNOBJCCountryKeyLB = 101,
  FPNOBJCCountryKeyLY = 102,
  FPNOBJCCountryKeyLR = 103,
  FPNOBJCCountryKeyLI = 104,
  FPNOBJCCountryKeyLT = 105,
  FPNOBJCCountryKeyLU = 106,
  FPNOBJCCountryKeyMO = 107,
  FPNOBJCCountryKeyMK = 108,
  FPNOBJCCountryKeyMG = 109,
  FPNOBJCCountryKeyMY = 110,
  FPNOBJCCountryKeyMW = 111,
  FPNOBJCCountryKeyMV = 112,
  FPNOBJCCountryKeyML = 113,
  FPNOBJCCountryKeyMT = 114,
  FPNOBJCCountryKeyMA = 115,
  FPNOBJCCountryKeyMQ = 116,
  FPNOBJCCountryKeyMU = 117,
  FPNOBJCCountryKeyMR = 118,
  FPNOBJCCountryKeyYT = 119,
  FPNOBJCCountryKeyMX = 120,
  FPNOBJCCountryKeyMD = 121,
  FPNOBJCCountryKeyMC = 122,
  FPNOBJCCountryKeyMN = 123,
  FPNOBJCCountryKeyMS = 124,
  FPNOBJCCountryKeyME = 125,
  FPNOBJCCountryKeyMZ = 126,
  FPNOBJCCountryKeyMM = 127,
  FPNOBJCCountryKeyNA = 128,
  FPNOBJCCountryKeyNR = 129,
  FPNOBJCCountryKeyNI = 130,
  FPNOBJCCountryKeyNE = 131,
  FPNOBJCCountryKeyNG = 132,
  FPNOBJCCountryKeyNU = 133,
  FPNOBJCCountryKeyNO = 134,
  FPNOBJCCountryKeyNC = 135,
  FPNOBJCCountryKeyNZ = 136,
  FPNOBJCCountryKeyNP = 137,
  FPNOBJCCountryKeyOM = 138,
  FPNOBJCCountryKeyUG = 139,
  FPNOBJCCountryKeyUZ = 140,
  FPNOBJCCountryKeyPK = 141,
  FPNOBJCCountryKeyPW = 142,
  FPNOBJCCountryKeyPA = 143,
  FPNOBJCCountryKeyPG = 144,
  FPNOBJCCountryKeyPY = 145,
  FPNOBJCCountryKeyNL = 146,
  FPNOBJCCountryKeyPH = 147,
  FPNOBJCCountryKeyPL = 148,
  FPNOBJCCountryKeyPF = 149,
  FPNOBJCCountryKeyPR = 150,
  FPNOBJCCountryKeyPT = 151,
  FPNOBJCCountryKeyPE = 152,
  FPNOBJCCountryKeyQA = 153,
  FPNOBJCCountryKeyRO = 154,
  FPNOBJCCountryKeyGB = 155,
  FPNOBJCCountryKeyRU = 156,
  FPNOBJCCountryKeyRW = 157,
  FPNOBJCCountryKeyCF = 158,
  FPNOBJCCountryKeyDO = 159,
  FPNOBJCCountryKeyBL = 160,
  FPNOBJCCountryKeyKN = 161,
  FPNOBJCCountryKeySM = 162,
  FPNOBJCCountryKeyMF = 163,
  FPNOBJCCountryKeyPM = 164,
  FPNOBJCCountryKeyVC = 165,
  FPNOBJCCountryKeySH = 166,
  FPNOBJCCountryKeyLC = 167,
  FPNOBJCCountryKeySV = 168,
  FPNOBJCCountryKeyWS = 169,
  FPNOBJCCountryKeyAS = 170,
  FPNOBJCCountryKeyST = 171,
  FPNOBJCCountryKeyRS = 172,
  FPNOBJCCountryKeySC = 173,
  FPNOBJCCountryKeySL = 174,
  FPNOBJCCountryKeySG = 175,
  FPNOBJCCountryKeySK = 176,
  FPNOBJCCountryKeySI = 177,
  FPNOBJCCountryKeySO = 178,
  FPNOBJCCountryKeySD = 179,
  FPNOBJCCountryKeySS = 180,
  FPNOBJCCountryKeyLK = 181,
  FPNOBJCCountryKeyCH = 182,
  FPNOBJCCountryKeySR = 183,
  FPNOBJCCountryKeySE = 184,
  FPNOBJCCountryKeySJ = 185,
  FPNOBJCCountryKeySZ = 186,
  FPNOBJCCountryKeySY = 187,
  FPNOBJCCountryKeySN = 188,
  FPNOBJCCountryKeyTJ = 189,
  FPNOBJCCountryKeyTZ = 190,
  FPNOBJCCountryKeyTW = 191,
  FPNOBJCCountryKeyTD = 192,
  FPNOBJCCountryKeyCZ = 193,
  FPNOBJCCountryKeyIO = 194,
  FPNOBJCCountryKeyPS = 195,
  FPNOBJCCountryKeyTH = 196,
  FPNOBJCCountryKeyTL = 197,
  FPNOBJCCountryKeyTG = 198,
  FPNOBJCCountryKeyTK = 199,
  FPNOBJCCountryKeyTO = 200,
  FPNOBJCCountryKeyTT = 201,
  FPNOBJCCountryKeyTN = 202,
  FPNOBJCCountryKeyTM = 203,
  FPNOBJCCountryKeyTR = 204,
  FPNOBJCCountryKeyTV = 205,
  FPNOBJCCountryKeyUA = 206,
  FPNOBJCCountryKeyUY = 207,
  FPNOBJCCountryKeyVU = 208,
  FPNOBJCCountryKeyVE = 209,
  FPNOBJCCountryKeyVN = 210,
  FPNOBJCCountryKeyWF = 211,
  FPNOBJCCountryKeyYE = 212,
  FPNOBJCCountryKeyZM = 213,
  FPNOBJCCountryKeyZW = 214,
  FPNOBJCCountryKeyEG = 215,
  FPNOBJCCountryKeyAE = 216,
  FPNOBJCCountryKeyEC = 217,
  FPNOBJCCountryKeyER = 218,
  FPNOBJCCountryKeyVA = 219,
  FPNOBJCCountryKeyFM = 220,
  FPNOBJCCountryKeyUS = 221,
  FPNOBJCCountryKeyET = 222,
  FPNOBJCCountryKeyCX = 223,
  FPNOBJCCountryKeyNF = 224,
  FPNOBJCCountryKeyIM = 225,
  FPNOBJCCountryKeyKY = 226,
  FPNOBJCCountryKeyCC = 227,
  FPNOBJCCountryKeyCK = 228,
  FPNOBJCCountryKeyFO = 229,
  FPNOBJCCountryKeyFK = 230,
  FPNOBJCCountryKeyMP = 231,
  FPNOBJCCountryKeyMH = 232,
  FPNOBJCCountryKeySB = 233,
  FPNOBJCCountryKeyTC = 234,
  FPNOBJCCountryKeyVG = 235,
  FPNOBJCCountryKeyVI = 236,
  FPNOBJCCountryKeyAX = 237,
};

@class UIFont;
@class UIColor;
enum FPNDisplayMode : NSInteger;

SWIFT_CLASS("_TtC15FlagPhoneNumber12FPNTextField")
@interface FPNTextField : UITextField
/// The size of the flag button
@property (nonatomic) CGSize flagButtonSize;
@property (nonatomic, strong) UIFont * _Nullable font;
@property (nonatomic, strong) UIColor * _Nullable textColor;
/// Present in the placeholder an example of a phone number according to the selected country code.
/// If false, you can set your own placeholder. Set to true by default.
@property (nonatomic) BOOL hasPhoneNumberExample;
/// Input Accessory View for the texfield
@property (nonatomic, strong) UIView * _Nullable textFieldInputAccessoryView;
@property (nonatomic) enum FPNDisplayMode displayMode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateConstraints;
- (CGRect)leftViewRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
/// For Objective-C, Get the current formatted phone number
- (NSString * _Nullable)getFormattedPhoneNumberWithFormat:(NSInteger)format SWIFT_WARN_UNUSED_RESULT;
/// Get the current raw phone number
- (NSString * _Nullable)getRawPhoneNumber SWIFT_WARN_UNUSED_RESULT;
/// Set directly the phone number. e.g “+33612345678”
- (void)setWithPhoneNumber:(NSString * _Nonnull)phoneNumber;
/// Set the country image according to country code. Example “FR”
- (void)setFlagWithKey:(enum FPNOBJCCountryKey)key;
/// Set the country list excluding the provided countries
- (void)setCountriesWithExcluding:(NSArray<NSNumber *> * _Nonnull)countries;
/// Set the country list including the provided countries
- (void)setCountriesIncluding:(NSArray<NSNumber *> * _Nonnull)countries;
@end

typedef SWIFT_ENUM(NSInteger, FPNDisplayMode, closed) {
  FPNDisplayModePicker = 0,
  FPNDisplayModeList = 1,
};


SWIFT_PROTOCOL("_TtP15FlagPhoneNumber20FPNTextFieldDelegate_")
@protocol FPNTextFieldDelegate <UITextFieldDelegate>
- (void)fpnDidSelectCountryWithName:(NSString * _Nonnull)name dialCode:(NSString * _Nonnull)dialCode code:(NSString * _Nonnull)code;
- (void)fpnDidValidatePhoneNumberWithTextField:(FPNTextField * _Nonnull)textField isValid:(BOOL)isValid;
- (void)fpnDisplayCountryList;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
