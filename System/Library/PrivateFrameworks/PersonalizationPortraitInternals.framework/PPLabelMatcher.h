/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PPLabelMatcher : NSObject {

	NSDictionary* _map;

}
+(id)sharedInstance;
-(id)init;
-(unsigned long long)matchFromLabel:(id)arg1 toLabel:(id)arg2 ;
-(id)_generateMap;
@end
