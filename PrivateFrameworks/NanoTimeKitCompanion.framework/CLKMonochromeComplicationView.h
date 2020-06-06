/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKMonochromeComplicationView <NSObject>
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@required
-(void)transitionToMonochromeWithFraction:(double)arg1;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setFilterProvider:(id)arg1;

@end
