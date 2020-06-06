/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSVMessageParserDelegate;
@class NSMutableData;

@interface MSVMessageParser : NSObject {

	id<MSVMessageParserDelegate> _delegate;
	NSMutableData* _unhandledPartialObjectData;
	long long _unhandledObjectDataExpectedLength;
	NSMutableData* _unhandledPartialData;

}

@property (nonatomic,retain) NSMutableData * unhandledPartialObjectData;                //@synthesize unhandledPartialObjectData=_unhandledPartialObjectData - In the implementation block
@property (assign,nonatomic) long long unhandledObjectDataExpectedLength;               //@synthesize unhandledObjectDataExpectedLength=_unhandledObjectDataExpectedLength - In the implementation block
@property (nonatomic,retain) NSMutableData * unhandledPartialData;                      //@synthesize unhandledPartialData=_unhandledPartialData - In the implementation block
@property (assign,nonatomic,__weak) id<MSVMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)createHeader:(unsigned long long)arg1 ;
-(id<MSVMessageParserDelegate>)delegate;
-(void)setDelegate:(id<MSVMessageParserDelegate>)arg1 ;
-(void)_notifyDelegate:(id)arg1 ;
-(void)setUnhandledPartialObjectData:(NSMutableData *)arg1 ;
-(void)setUnhandledObjectDataExpectedLength:(long long)arg1 ;
-(void)processData:(id)arg1 ;
-(NSMutableData *)unhandledPartialObjectData;
-(long long)unhandledObjectDataExpectedLength;
-(NSMutableData *)unhandledPartialData;
-(void)setUnhandledPartialData:(NSMutableData *)arg1 ;
@end

