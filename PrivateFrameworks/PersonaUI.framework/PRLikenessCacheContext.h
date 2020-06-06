/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRLikenessCacheContext : NSObject {

	BOOL _circular;
	BOOL _forceDecode;
	unsigned long long _cacheSize;
	double _scale;

}

@property (assign,nonatomic) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) BOOL circular;                             //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL forceDecode;                          //@synthesize forceDecode=_forceDecode - In the implementation block
+(id)contextWithCacheSize:(unsigned long long)arg1 ;
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned long long)cacheSize;
-(void)setCircular:(BOOL)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(BOOL)circular;
-(BOOL)forceDecode;
-(void)setForceDecode:(BOOL)arg1 ;
@end

