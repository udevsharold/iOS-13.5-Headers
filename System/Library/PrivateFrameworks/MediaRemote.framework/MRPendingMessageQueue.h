/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MRPendingMessageQueue : NSObject {

	NSMutableArray* _messages;
	NSMutableArray* _delayableMessages;
	unsigned long long _lowPriorityMessagesCount;
	unsigned long long _maxLowPriorityMessagesAllowed;

}
-(void)dealloc;
-(id)peek;
-(void)push:(id)arg1 ;
-(void)pop;
-(void)_purge;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
@end
