/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <libobjc.A.dylib/_DUIClientSessionAccessibility.h>

@protocol AXDragSessionDragManager, AXDragSessionDelegate;
@class NSXPCConnection;

@interface AXDragSession : NSObject <_DUIClientSessionAccessibility> {

	NSXPCConnection* _connection;
	id<AXDragSessionDragManager> _manager;
	BOOL _resumed;
	BOOL _aborted;
	id<AXDragSessionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDragSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AXDragSessionDelegate>)delegate;
-(void)setDelegate:(id<AXDragSessionDelegate>)arg1 ;
-(void)cancel;
-(void)resume;
-(id)manager;
-(void)abort;
-(void)setManager:(id)arg1 ;
-(oneway void)dragWillBeginWithReply:(/*^block*/id)arg1 ;
-(oneway void)dragStatusDidChange:(id)arg1 ;
-(oneway void)dragDidEndWithOperation:(unsigned long long)arg1 ;
-(id)_serverSession;
-(id)initWithDruidConnection:(id)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 forRequestor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)drop;
@end

