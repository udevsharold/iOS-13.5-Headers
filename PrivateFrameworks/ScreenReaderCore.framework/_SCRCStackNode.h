/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _SCRCStackNode : NSObject {

	id _object;
	_SCRCStackNode* _prev;
	_SCRCStackNode* _next;

}

@property (nonatomic,retain) id object;                          //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * next;              //@synthesize next=_next - In the implementation block
-(id)object;
-(void)setObject:(id)arg1 ;
-(_SCRCStackNode *)next;
-(_SCRCStackNode *)prev;
-(void)setNext:(_SCRCStackNode *)arg1 ;
-(void)setPrev:(_SCRCStackNode *)arg1 ;
@end

