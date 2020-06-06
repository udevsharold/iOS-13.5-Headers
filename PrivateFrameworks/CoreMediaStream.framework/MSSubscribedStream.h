/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding> {

	NSString* _streamID;
	NSString* _ctag;

}

@property (nonatomic,retain) NSString * streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                  //@synthesize ctag=_ctag - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)subscribedStreamWithStreamID:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(id)initWithStreamID:(id)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
@end

