/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned long long _index;
	BOOL _includeHidden;

}
-(id)nextObject;
-(id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2 ;
@end
