/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/_SUICEditScript.h>

@class _SUICAtomIndexed;

@interface _SUICEditScriptIndexed : _SUICEditScript {

	_SUICAtomIndexed* _currentScriptAtom;

}
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 orderAtomsAscending:(BOOL)arg3 operationPrecedence:(long long)arg4 ;
+(id)editScriptFromArray:(id)arg1 toArray:(id)arg2 ;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(void)finalizeCurrentScriptAtom;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 fromArray:(id)arg3 toArray:(id)arg4 orderAtomsAscending:(BOOL)arg5 ;
-(id)applyToArray:(id)arg1 ;
@end

