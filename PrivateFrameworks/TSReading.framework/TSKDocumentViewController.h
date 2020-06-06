/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TSKDocumentViewController
@property (nonatomic,retain,readonly) id documentRoot; 
@property (nonatomic,readonly) BOOL isCJKEnabled; 
@property (nonatomic,readonly) NSArray * CJKLanguages; 
@property (nonatomic,readonly) BOOL isBiDiEnabled; 
@property (nonatomic,readonly) NSArray * bidiLanguages; 
@property (nonatomic,readonly) NSArray * listLanguages; 
@required
-(id)documentRoot;
-(BOOL)inPrintPreviewMode;
-(BOOL)inFindReplaceMode;
-(NSArray *)CJKLanguages;
-(NSArray *)bidiLanguages;
-(BOOL)toolsControllerIsVisible;
-(BOOL)insertControllerIsVisible;
-(void)showInsertPopoverFromRect:(CGRect)arg1 popoverType:(int)arg2 withDoneButton:(BOOL)arg3;
-(BOOL)isInspectorVisible;
-(BOOL)isCJKEnabled;
-(BOOL)isBiDiEnabled;
-(NSArray *)listLanguages;

@end

