/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconStateUnarchiveContext <NSObject>
@required
-(void)_noteEnteredNode;
-(void)_noteExitedNode;
-(void)_pushFolder:(id)arg1;
-(id)_currentFolder;
-(id)_popFolder;
-(long long)_currentParseDepth;
-(void)_noteRepresentationIsCorrupted;
-(void)_noteSignificantDeviation;
-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)arg1;
-(void)_noteNodeIdentifierWasUnarchived:(id)arg1;

@end

