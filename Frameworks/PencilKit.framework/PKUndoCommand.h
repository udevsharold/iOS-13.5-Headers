/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface PKUndoCommand : NSObject {

	NSUUID* _drawingUUID;
	NSString* _actionName;

}

@property (nonatomic,readonly) NSUUID * drawingUUID;               //@synthesize drawingUUID=_drawingUUID - In the implementation block
@property (nonatomic,readonly) NSString * actionName;              //@synthesize actionName=_actionName - In the implementation block
-(id)strokes;
-(id)inverted;
-(NSString *)actionName;
-(NSUUID *)drawingUUID;
-(void)registerWithUndoManager:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)applyToDrawing:(id)arg1 ;
-(id)invertedInDrawing:(id)arg1 ;
-(id)initWithDrawingUUID:(id)arg1 actionName:(id)arg2 ;
@end

