/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragSession;
@interface _UICollectionViewDragSourceControllerSessionState : NSObject {

	id<UIDragSession> _dragSession;

}

@property (nonatomic,retain) id<UIDragSession> dragSession;              //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(id)description;
-(BOOL)isActive;
-(id<UIDragSession>)dragSession;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
@end

