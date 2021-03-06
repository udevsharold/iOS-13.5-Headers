/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Protocol;

@interface MRWeakProxy : NSObject {

	id _object;
	Protocol* _protocol;

}

@property (assign,nonatomic,__weak) id object;                 //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)weakProxyWithObject:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(Protocol *)protocol;
-(void)setProtocol:(Protocol *)arg1 ;
@end

