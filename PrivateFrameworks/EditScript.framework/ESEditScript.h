/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EditScript.framework/EditScript
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ESEditScriptData;
@class ESIntArray2D, NSArray, NSMutableArray;

@interface ESEditScript : NSObject {

	BOOL _orderAtomsAscending;
	ESIntArray2D* _distanceMatrix;
	long long _currentOperation;
	id<ESEditScriptData> _itemAData;
	id<ESEditScriptData> _itemBData;
	NSArray* _operationPrecedenceArray;
	NSMutableArray* _script;

}

@property (nonatomic,copy) NSArray * operationPrecedenceArray;              //@synthesize operationPrecedenceArray=_operationPrecedenceArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * script;                       //@synthesize script=_script - In the implementation block
-(id)description;
-(NSMutableArray *)script;
-(id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1 ;
-(void)setScript:(NSMutableArray *)arg1 ;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)finalizeCurrentScriptAtom;
-(id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(BOOL)arg2 ;
-(void)computeDistanceMatrix;
-(void)computeEditsFromMatrix;
-(NSArray *)operationPrecedenceArray;
-(void)setOperationPrecedenceArray:(NSArray *)arg1 ;
@end

