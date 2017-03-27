// Generated by Apple Swift version 3.0.1 (swiftlang-800.0.58.6 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class ESTabBarItemContentView;
@class UITabBarItem;
@class UIEvent;
@class NSCoder;

/**
  ESTabBar是高度自定义的UITabBar子类，通过添加UIControl的方式实现自定义tabBarItem的效果。目前支持tabBar的大部分属性的设置，例如delegate,items,selectedImge,itemPositioning,itemWidth,itemSpacing等，以后会更加细致的优化tabBar原有属性的设置效果。
*/
SWIFT_CLASS("_TtC18ESTabBarController8ESTabBar")
@interface ESTabBar : UITabBar
/**
  tabBar中items布局偏移量
*/
@property (nonatomic) UIEdgeInsets itemEdgeInsets;
/**
  自定义’More’按钮样式，继承自ESTabBarItemContentView
*/
@property (nonatomic, strong) ESTabBarItemContentView * _Nullable moreContentView;
@property (nonatomic, copy) NSArray<UITabBarItem *> * _Nullable items;
@property (nonatomic) BOOL isEditing;
- (void)setItems:(NSArray<UITabBarItem *> * _Nullable)items animated:(BOOL)animated;
- (void)beginCustomizingItems:(NSArray<UITabBarItem *> * _Nonnull)items;
- (BOOL)endCustomizingAnimated:(BOOL)animated;
- (void)layoutSubviews;
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface ESTabBar (SWIFT_EXTENSION(ESTabBarController))
@end


@interface ESTabBar (SWIFT_EXTENSION(ESTabBarController))
@end

@class UIViewController;
@class NSBundle;

SWIFT_CLASS("_TtC18ESTabBarController18ESTabBarController")
@interface ESTabBarController : UITabBarController
/**
  打印异常
*/
+ (void)printError:(NSString * _Nonnull)description;
/**
  当前tabBarController是否存在”More”tab
*/
+ (BOOL)isShowingMore:(UITabBarController * _Nullable)tabBarController;
/**
  Should hijack select action or not.
*/
@property (nonatomic, copy) BOOL (^ _Nullable shouldHijackHandler)(UITabBarController * _Nonnull, UIViewController * _Nonnull, NSInteger);
/**
  Hijack select action.
*/
@property (nonatomic, copy) void (^ _Nullable didHijackHandler)(UITabBarController * _Nonnull, UIViewController * _Nonnull, NSInteger);
/**
  Observer tabBarController’s selectedViewController. change its selection when it will-set.
*/
@property (nonatomic, strong) UIViewController * _Nullable selectedViewController;
/**
  Observer tabBarController’s selectedIndex. change its selection when it will-set.
*/
@property (nonatomic) NSUInteger selectedIndex;
/**
  Customize set tabBar use KVC.
*/
- (void)viewDidLoad;
- (void)tabBar:(UITabBar * _Nonnull)tabBar didSelectItem:(UITabBarItem * _Nonnull)item;
- (void)tabBar:(UITabBar * _Nonnull)tabBar willBeginCustomizingItems:(NSArray<UITabBarItem *> * _Nonnull)items;
- (void)tabBar:(UITabBar * _Nonnull)tabBar didEndCustomizingItems:(NSArray<UITabBarItem *> * _Nonnull)items changed:(BOOL)changed;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
@class UIColor;

SWIFT_CLASS("_TtC18ESTabBarController12ESTabBarItem")
@interface ESTabBarItem : UITabBarItem
/**
  Customize content view
*/
@property (nonatomic, strong) ESTabBarItemContentView * _Nullable contentView;
@property (nonatomic, copy) NSString * _Nullable title;
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, strong) UIImage * _Nullable selectedImage;
@property (nonatomic, copy) NSString * _Nullable badgeValue;
/**
  Override UITabBarItem.badgeColor, make it available for iOS8.0 and later.
  If this item displays a badge, this color will be used for the badge’s background. If set to nil, the default background color will be used instead.
*/
@property (nonatomic, strong) UIColor * _Nullable badgeColor;
@property (nonatomic) NSInteger tag;
- (nonnull instancetype)init:(ESTabBarItemContentView * _Nonnull)contentView title:(NSString * _Nullable)title image:(UIImage * _Nullable)image selectedImage:(UIImage * _Nullable)selectedImage tag:(NSInteger)tag OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)setTitle:(NSString * _Nullable)title image:(UIImage * _Nullable)image selectedImage:(UIImage * _Nullable)selectedImage tag:(NSInteger)tag;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIImageView;
@class UILabel;

SWIFT_CLASS("_TtC18ESTabBarController21ESTabBarItemBadgeView")
@interface ESTabBarItemBadgeView : UIView
/**
  默认颜色
*/
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) UIColor * _Nonnull defaultBadgeColor;)
+ (UIColor * _Nonnull)defaultBadgeColor;
+ (void)setDefaultBadgeColor:(UIColor * _Nonnull)value;
/**
  Badge color
*/
@property (nonatomic, strong) UIColor * _Nullable badgeColor;
/**
  Badge value, supprot nil, “”, “1”, “someText”. Hidden when nil. Show Little dot style when “”.
*/
@property (nonatomic, copy) NSString * _Nullable badgeValue;
/**
  Image view
*/
@property (nonatomic, strong) UIImageView * _Nonnull imageView;
/**
  显示badgeValue的Label
*/
@property (nonatomic, strong) UILabel * _Nonnull badgeLabel;
/**
  Initializer
*/
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)size;
@end


SWIFT_CLASS("_TtC18ESTabBarController23ESTabBarItemContentView")
@interface ESTabBarItemContentView : UIView
/**
  设置contentView的偏移
*/
@property (nonatomic) UIEdgeInsets insets;
/**
  是否被选中
*/
@property (nonatomic) BOOL selected;
/**
  是否处于高亮状态
*/
@property (nonatomic) BOOL highlighted;
/**
  是否支持高亮
*/
@property (nonatomic) BOOL highlightEnabled;
/**
  文字颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/**
  高亮时文字颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull highlightTextColor;
/**
  icon颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull iconColor;
/**
  高亮时icon颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull highlightIconColor;
/**
  背景颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull backdropColor;
/**
  高亮时背景颜色
*/
@property (nonatomic, strong) UIColor * _Nonnull highlightBackdropColor;
@property (nonatomic, copy) NSString * _Nullable title;
/**
  Icon imageView renderingMode, default is .alwaysTemplate like UITabBarItem
*/
@property (nonatomic) UIImageRenderingMode renderingMode;
/**
  Icon imageView’s image
*/
@property (nonatomic, strong) UIImage * _Nullable image;
@property (nonatomic, strong) UIImage * _Nullable selectedImage;
@property (nonatomic, strong) UIImageView * _Nonnull imageView;
@property (nonatomic, strong) UILabel * _Nonnull titleLabel;
/**
  小红点相关属性
*/
@property (nonatomic, copy) NSString * _Nullable badgeValue;
@property (nonatomic, strong) UIColor * _Nullable badgeColor;
@property (nonatomic, strong) ESTabBarItemBadgeView * _Nonnull badgeView;
@property (nonatomic) UIOffset badgeOffset;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateDisplay;
- (void)updateLayout;
- (void)selectAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (void)deselectAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (void)reselectAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (void)highlightAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (void)dehighlightAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
- (void)badgeChangedAnimationWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(void))completion;
@end


SWIFT_CLASS("_TtC18ESTabBarController27ESTabBarItemMoreContentView")
@interface ESTabBarItemMoreContentView : ESTabBarItemContentView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
