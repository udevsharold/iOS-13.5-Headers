/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, MRProtocolMessage;

@interface MRMessageData : NSObject {

	NSData* _data;
	MRProtocolMessage* _message;
	/*^block*/id _dataBlock;
	long long _readPosition;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) MRProtocolMessage * message; 
@property (assign,nonatomic) long long readPosition;                         //@synthesize readPosition=_readPosition - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) BOOL canPurge; 
-(NSData *)data;
-(BOOL)isFinished;
-(MRProtocolMessage *)message;
-(id)initWithMessage:(id)arg1 createDataBlock:(/*^block*/id)arg2 ;
-(long long)readPosition;
-(void)setReadPosition:(long long)arg1 ;
-(BOOL)canPurge;
@end

