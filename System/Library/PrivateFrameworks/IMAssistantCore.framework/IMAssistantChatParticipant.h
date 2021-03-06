/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMHandle, IMAssistantHandleFromContact;

@interface IMAssistantChatParticipant : NSObject {

	IMHandle* _imHandle;
	IMAssistantHandleFromContact* _handleFromContact;

}

@property (nonatomic,readonly) IMHandle * imHandle;                                           //@synthesize imHandle=_imHandle - In the implementation block
@property (nonatomic,readonly) IMAssistantHandleFromContact * handleFromContact;              //@synthesize handleFromContact=_handleFromContact - In the implementation block
-(id)description;
-(IMHandle *)imHandle;
-(id)initWithIMHandle:(id)arg1 handleFromContact:(id)arg2 ;
-(IMAssistantHandleFromContact *)handleFromContact;
@end

