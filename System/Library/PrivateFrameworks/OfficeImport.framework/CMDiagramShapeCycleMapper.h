/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMDiagramShapeMapper.h>

@interface CMDiagramShapeCycleMapper : CMDiagramShapeMapper {

	float mScale;
	BOOL mCircularArrows;
	int mDiagramType;
	int mArrowShapeType;

}
-(id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5 ;
-(CGRect)circumscribedBounds;
-(void)mapChildrenAt:(id)arg1 withState:(id)arg2 ;
-(CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(CGSize)nodeSize;
-(CGRect)nodeBoundsWithIndex:(unsigned long long)arg1 ;
-(void)mapTransitionPointAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
-(void)mapTransitionArrowsAt:(id)arg1 index:(unsigned)arg2 withState:(id)arg3 ;
@end

