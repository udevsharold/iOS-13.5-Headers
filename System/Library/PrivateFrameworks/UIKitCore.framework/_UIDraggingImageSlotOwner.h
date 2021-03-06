/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, _UIDragManager;

@interface _UIDraggingImageSlotOwner : NSObject {

	NSMutableArray* _usedSlotIDs;
	_UIDragManager* _dragManager;

}

@property (nonatomic,__weak,readonly) _UIDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(void)dealloc;
-(_UIDragManager *)dragManager;
-(unsigned)uploadImage:(CGImageRef)arg1 ;
-(id)initWithDragManager:(id)arg1 ;
@end

