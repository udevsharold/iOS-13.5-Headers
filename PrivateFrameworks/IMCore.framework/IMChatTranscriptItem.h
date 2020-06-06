/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSAttributedString, NSDate, IMServiceImpl, IMHandle;


@protocol IMChatTranscriptItem <NSObject>
@property (getter=isFromMe,nonatomic,readonly) BOOL fromMe; 
@property (nonatomic,readonly) BOOL wantsTail; 
@property (nonatomic,copy,readonly) NSAttributedString * transcriptText; 
@property (nonatomic,readonly) NSDate * transcriptDate; 
@property (nonatomic,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) IMHandle * handle; 
@required
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(BOOL)isFromMe;
-(NSAttributedString *)transcriptText;
-(BOOL)wantsTail;
-(NSDate *)transcriptDate;

@end

