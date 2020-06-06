/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Email/EMMessageChangeAction.h>

@class ECMessageFlagChange;

@interface EMMessageFlagChangeAction : EMMessageChangeAction {

	ECMessageFlagChange* _flagChange;

}

@property (nonatomic,readonly) ECMessageFlagChange * flagChange;              //@synthesize flagChange=_flagChange - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)signpostType;
-(ECMessageFlagChange *)flagChange;
-(id)initWithMessageListItems:(id)arg1 flagChange:(id)arg2 ;
@end

