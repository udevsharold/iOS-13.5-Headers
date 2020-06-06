/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKStyleMapper <NSObject>
@required
-(id)mappedStyleForStyle:(id)arg1;
-(void)varyInThemeStylesheetForDurationOfBlock:(/*^block*/id)arg1;
-(id)targetStylesheet;
-(void)pushMappingContext:(id)arg1;
-(void)popMappingContext:(id)arg1;
-(id)mappedStyleForStyle:(id)arg1 inThemeStylesheet:(BOOL)arg2;
-(void)varyInThemeStylesheetIf:(BOOL)arg1 forDurationOfBlock:(/*^block*/id)arg2;

@end

