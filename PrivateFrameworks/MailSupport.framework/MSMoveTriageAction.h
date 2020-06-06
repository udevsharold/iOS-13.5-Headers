/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MSTriageAction.h>

@class EMMailbox, ECMessageFlagChange;

@interface MSMoveTriageAction : MSTriageAction {

	EMMailbox* _destinationMailbox;
	long long _destinationMailboxType;
	ECMessageFlagChange* _flagChange;
	BOOL _copyMessages;

}
-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailboxType:(long long)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 destinationMailbox:(id)arg3 flagChange:(id)arg4 copyMessages:(BOOL)arg5 ;
@end

