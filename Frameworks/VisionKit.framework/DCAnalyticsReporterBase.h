/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DCAnalyticsReporterAccessibilityDelegate;
@interface DCAnalyticsReporterBase : NSObject {

	id<DCAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;

}

@property (assign,nonatomic,__weak) id<DCAnalyticsReporterAccessibilityDelegate> accessibilityDelegate;              //@synthesize accessibilityDelegate=_accessibilityDelegate - In the implementation block
+(id)instrumentationKeyForKey:(id)arg1 ;
+(long long)roundIntegerValue:(long long)arg1 ;
+(double)roundDoubleValue:(double)arg1 ;
-(void)addValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setAccessibilityDelegate:(id<DCAnalyticsReporterAccessibilityDelegate>)arg1 ;
-(id<DCAnalyticsReporterAccessibilityDelegate>)accessibilityDelegate;
-(void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3 ;
-(void)pushValue:(double)arg1 toDistributionKey:(id)arg2 ;
-(id)instrumentationKeyForKey:(id)arg1 ;
-(void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3 ;
-(void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 ;
-(id)whitelistedKeysForAccessibility;
-(BOOL)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2 ;
-(id)instrumentationAXKeyForKey:(id)arg1 ;
-(id)keyForCurrentlyActiveAssistiveTechnology;
-(void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3 ;
@end

