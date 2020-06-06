/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/CNComposeRecipient.h>

@class WFContact;

@interface WFContactComposeRecipient : CNComposeRecipient {

	WFContact* _wfContact;

}

@property (nonatomic,readonly) WFContact * wfContact;              //@synthesize wfContact=_wfContact - In the implementation block
-(id)displayString;
-(id)initWithWFContact:(id)arg1 ;
-(id)wf_contactFieldEntry;
-(WFContact *)wfContact;
@end
