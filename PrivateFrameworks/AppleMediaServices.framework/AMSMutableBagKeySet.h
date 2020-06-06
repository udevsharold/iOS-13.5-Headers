/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSBagKeySet.h>

@class NSMutableSet;

@interface AMSMutableBagKeySet : AMSBagKeySet {

	NSMutableSet* _mutableKeys;

}

@property (nonatomic,retain) NSMutableSet * mutableKeys;              //@synthesize mutableKeys=_mutableKeys - In the implementation block
-(id)init;
-(id)keys;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)unionBagKeySet:(id)arg1 ;
-(void)setMutableKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableKeys;
-(void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
@end

