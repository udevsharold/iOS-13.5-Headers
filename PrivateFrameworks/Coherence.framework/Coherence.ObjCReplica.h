/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface Coherence.ObjCReplica : NSObject {

	??? uuid;
	 index;

}

@property (copy,nonatomic) NSUUID * uuid; 
@property (assign,nonatomic) long long index; 
-(id)init;
-(long long)index;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(id)initWithUuid:(id)arg1 index:(long long)arg2 ;
@end

