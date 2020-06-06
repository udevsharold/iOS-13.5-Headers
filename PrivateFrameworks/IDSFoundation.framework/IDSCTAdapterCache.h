/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IDSCTAdapterCache : NSObject {

	unsigned long long _dualSIMEnabled;
	unsigned long long _isAnySIMUsable;
	unsigned long long _isAnySIMInserted;
	unsigned long long _supportsIdentification;
	NSArray* _contexts;

}

@property (assign,nonatomic) unsigned long long dualSIMEnabled;                      //@synthesize dualSIMEnabled=_dualSIMEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMUsable;                      //@synthesize isAnySIMUsable=_isAnySIMUsable - In the implementation block
@property (assign,nonatomic) unsigned long long isAnySIMInserted;                    //@synthesize isAnySIMInserted=_isAnySIMInserted - In the implementation block
@property (assign,nonatomic) unsigned long long supportsIdentification;              //@synthesize supportsIdentification=_supportsIdentification - In the implementation block
@property (nonatomic,retain) NSArray * contexts;                                     //@synthesize contexts=_contexts - In the implementation block
-(id)debugDescription;
-(NSArray *)contexts;
-(void)setContexts:(NSArray *)arg1 ;
-(unsigned long long)supportsIdentification;
-(unsigned long long)dualSIMEnabled;
-(void)setDualSIMEnabled:(unsigned long long)arg1 ;
-(unsigned long long)isAnySIMUsable;
-(void)setIsAnySIMUsable:(unsigned long long)arg1 ;
-(unsigned long long)isAnySIMInserted;
-(void)setIsAnySIMInserted:(unsigned long long)arg1 ;
-(void)setSupportsIdentification:(unsigned long long)arg1 ;
@end

