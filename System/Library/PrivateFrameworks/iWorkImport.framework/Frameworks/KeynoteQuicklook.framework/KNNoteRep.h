/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSDRep.h>
#import <libobjc.A.dylib/TSWPRepParent.h>
#import <libobjc.A.dylib/TSDContainerRep.h>
#import <libobjc.A.dylib/TSWPStorageObserver.h>

@class TSWPRep, NSString, NSArray;

@interface KNNoteRep : TSDRep <TSWPRepParent, TSDContainerRep, TSWPStorageObserver> {

	TSWPRep* _containedRep;

}

@property (nonatomic,readonly) TSWPRep * containedRep;                                 //@synthesize containedRep=_containedRep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (nonatomic,readonly) NSArray * childReps; 
-(void)dealloc;
-(NSArray *)childReps;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(BOOL)canBeginEditingChildRepOnDoubleTap:(id)arg1 ;
-(void)willBeginEditingContainedRep;
-(void)willEndEditingContainedRep;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(unsigned long long)arg4 ;
-(TSWPRep *)containedRep;
-(void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2 ;
-(double)columnHeight;
-(id)editingRep;
-(BOOL)shouldShowCollaboratorCursorHighlight;
@end

