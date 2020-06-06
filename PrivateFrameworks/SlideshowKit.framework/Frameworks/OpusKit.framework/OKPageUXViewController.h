/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPageViewController.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKWidgetViewDelegate.h>
#import <libobjc.A.dylib/OKPageViewControllerProxyExport.h>

@class NSMutableArray, UIDynamicAnimator, UIGravityBehavior, UICollisionBehavior, NSMutableDictionary, OKPageView, NSArray, NSString;

@interface OKPageUXViewController : OKPageViewController <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, OKCollectionProxyDataSource, OKWidgetViewDelegate, OKPageViewControllerProxyExport> {

	NSMutableArray* _widgetViews;
	NSMutableArray* _newWidgetViews;
	NSMutableArray* _pageViewZones;
	CGSize _pageViewZoneSize;
	BOOL _parallaxEnabled;
	double _parallaxRatioX;
	double _parallaxRatioY;
	CGPoint _lastParallaxOffset;
	BOOL _dynamicsEnabled;
	UIDynamicAnimator* _dynamicsAnimator;
	UIGravityBehavior* _dynamicsGravityBehavior;
	BOOL _dynamicsGravityBehaviorMotionDriven;
	UICollisionBehavior* _dynamicsPageCollisionBehavior;
	NSMutableDictionary* _dynamicsWidgetCollisionBehaviors;
	NSMutableDictionary* _dynamicsPushBehaviors;
	OKPageView* _pageView;

}

@property (assign,nonatomic) double parallaxRatioX;                                      //@synthesize parallaxRatioX=_parallaxRatioX - In the implementation block
@property (assign,nonatomic) double parallaxRatioY;                                      //@synthesize parallaxRatioY=_parallaxRatioY - In the implementation block
@property (assign,nonatomic) CGPoint lastParallaxOffset;                                 //@synthesize lastParallaxOffset=_lastParallaxOffset - In the implementation block
@property (nonatomic,retain,readonly) UIDynamicAnimator * dynamicsAnimator;              //@synthesize dynamicsAnimator=_dynamicsAnimator - In the implementation block
@property (nonatomic,retain,readonly) OKPageView * pageView;                             //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain,readonly) NSArray * widgetViews;                             //@synthesize widgetViews=_widgetViews - In the implementation block
@property (nonatomic,readonly) BOOL parallaxEnabled;                                     //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,readonly) BOOL dynamicsEnabled;                                     //@synthesize dynamicsEnabled=_dynamicsEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(void)viewDidLoad;
-(BOOL)prepareForDisplay;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3 ;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)dynamicAnimatorWillResume:(id)arg1 ;
-(OKPageView *)pageView;
-(BOOL)parallaxEnabled;
-(void)prepareForReload;
-(void)instantPause;
-(id)settingObjectForKey:(id)arg1 ;
-(id)visibleWidgets;
-(id)pageViewForWidgetView:(id)arg1 ;
-(id)widgetViewResolution:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2 ;
-(void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3 ;
-(NSArray *)widgetViews;
-(void)networkStatusDidChange:(long long)arg1 ;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(void)reloadPageViewZones;
-(id)widgetViewForName:(id)arg1 recursively:(BOOL)arg2 ;
-(CGRect)calculateVisibleRectForWidgetRect:(CGRect)arg1 withParallax:(double)arg2 ;
-(void)reloadPageViewZonesWithSize:(CGSize)arg1 ;
-(CGRect)calculateVisibleRectForWidget:(id)arg1 ;
-(id)pageViewZonesInRect:(CGRect)arg1 ;
-(void)reloadPageViewZonesForSubwidgets:(id)arg1 withParallax:(double)arg2 ;
-(CGPoint)lastParallaxOffset;
-(CGPoint)parallaxWithOffsetX:(double)arg1 offsetY:(double)arg2 zPosition:(double)arg3 ;
-(void)removeWidgetViewInPageViewZones:(id)arg1 ;
-(id)newWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(void)addWidgetViewInPageViewZones:(id)arg1 ;
-(id)mediaURLs;
-(void)widgetViewsInDisplayRect:(CGRect)arg1 displaySet:(id)arg2 andWarmupRect:(CGRect)arg3 warmupSet:(id)arg4 ;
-(id)widgetViewsInRect:(CGRect)arg1 ;
-(void)updateMotion;
-(void)updateParallax;
-(void)updateDynamics;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3 ;
-(void)setLastParallaxOffset:(CGPoint)arg1 ;
-(double)parallaxRatioX;
-(double)parallaxRatioY;
-(id)_preparseLayoutString:(id)arg1 targetView:(out id*)arg2 anchorView:(out id*)arg3 ;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)widgetViewNames;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)_remoteWidgetsForWidgetView:(id)arg1 keyPath:(id)arg2 ;
-(BOOL)settingDynamicsGravityEnabled;
-(BOOL)settingDynamicsCollisionConfinementEnabled;
-(void)reloadDynamics;
-(void)resetDynamics;
-(void)removeWidgetView:(id)arg1 ;
-(BOOL)hasWidgetFocused;
-(id)addWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(CGPoint)convertPointWithMotionAndParallax:(CGPoint)arg1 andZPosition:(double)arg2 ;
-(void)applySettings;
-(void)updateWidgetViewInPageViewZones:(id)arg1 ;
-(void)prepareWidgetsInRect:(CGRect)arg1 ;
-(void)prepareAllWidgets;
-(void)updateMotionForWidgetView:(id)arg1 ;
-(void)updateParallaxWithOffsetX:(double)arg1 offsetY:(double)arg2 ;
-(void)updateParallaxForWidgetView:(id)arg1 ;
-(void)updateLayoutSteps;
-(id)currentRemoteWidgets;
-(void)setSettingParallaxEnabled:(BOOL)arg1 ;
-(void)setSettingParallaxRatioX:(double)arg1 ;
-(void)setSettingParallaxRatioY:(double)arg1 ;
-(void)setSettingDynamicsEnabled:(BOOL)arg1 ;
-(void)setSettingDynamicsGravityEnabled:(BOOL)arg1 ;
-(void)setSettingDynamicsGravityAngle:(float)arg1 ;
-(void)setSettingDynamicsGravityMagnitude:(float)arg1 ;
-(void)setSettingDynamicsGravityMotionDriven:(BOOL)arg1 ;
-(void)setSettingDynamicsCollisionConfinementEnabled:(BOOL)arg1 ;
-(void)setSettingDynamicsPushBehaviors:(id)arg1 ;
-(BOOL)dynamicsEnabled;
-(void)setParallaxRatioX:(double)arg1 ;
-(void)setParallaxRatioY:(double)arg1 ;
-(UIDynamicAnimator *)dynamicsAnimator;
@end

