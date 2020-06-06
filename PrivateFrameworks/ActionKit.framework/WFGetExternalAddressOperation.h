/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:42 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, NSError, NSMutableData;

@interface WFGetExternalAddressOperation : NSOperation {

	BOOL _useIPv6;
	NSString* _result;
	NSError* _error;
	NSMutableData* _data;
	CFReadStreamRef _stream;

}

@property (nonatomic,retain) NSMutableData * data;                //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) CFReadStreamRef stream;              //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL useIPv6;                        //@synthesize useIPv6=_useIPv6 - In the implementation block
@property (nonatomic,retain) NSString * result;                   //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                     //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(NSMutableData *)data;
-(NSError *)error;
-(void)setData:(NSMutableData *)arg1 ;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isReady;
-(NSString *)result;
-(void)setResult:(NSString *)arg1 ;
-(CFReadStreamRef)stream;
-(void)setStream:(CFReadStreamRef)arg1 ;
-(void)update;
-(void)handleStreamEvent:(unsigned long long)arg1 ;
-(BOOL)useIPv6;
-(void)setUseIPv6:(BOOL)arg1 ;
@end

