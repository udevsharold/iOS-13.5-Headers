/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	BSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<BSXPCEncoding><BSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                        //@synthesize context=_context - In the implementation block
-(RBSXPCMessageContext *)context;
-(id<BSXPCEncoding><BSXPCDecoding>)payload;
-(void)send;
-(id)_initWithMessage:(id)arg1 ;
-(void)prepareForHandoff;
-(void)encode:(/*^block*/id)arg1 ;
@end
