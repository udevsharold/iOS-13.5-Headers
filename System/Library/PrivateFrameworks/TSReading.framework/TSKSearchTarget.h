/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKSearchTarget <NSObject>
@optional
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3;
-(id)childSearchTargets;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1;
-(id)childAnnotationSearchTargets;
-(void)layoutSearchForSpellingErrorsWithHitBlock:(/*^block*/id)arg1 stop:(BOOL*)arg2;

@end

