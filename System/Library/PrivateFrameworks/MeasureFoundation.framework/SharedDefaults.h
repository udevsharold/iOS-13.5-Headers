/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MeasureFoundation.framework/MeasureFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SharedDefaults : NSObject {

	long long _cachedMeasureUnits;

}

@property (assign) long long cachedMeasureUnits;              //@synthesize cachedMeasureUnits=_cachedMeasureUnits - In the implementation block
+(id)defaults;
+(id)measureUnits;
+(id)getDefaultValues;
+(void)setupSpecifier:(id)arg1 ;
+(long long)currentMeasureUnits;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCachedMeasureUnits:(long long)arg1 ;
-(long long)cachedMeasureUnits;
@end

