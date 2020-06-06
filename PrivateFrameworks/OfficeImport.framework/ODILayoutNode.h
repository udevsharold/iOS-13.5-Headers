/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDPoint, ODDAlgorithm, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {

	ODDPoint* mPoint;
	ODDAlgorithm* mAlgorithm;
	ODDShape* mShape;
	NSMutableArray* mChildren;

}
-(id)initWithLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(id)initWithLayoutNode:(id)arg1 point:(id)arg2 ;
-(void)processLayoutObjects:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processChoose:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processForEach:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processAlgorithm:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processShape:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
@end
