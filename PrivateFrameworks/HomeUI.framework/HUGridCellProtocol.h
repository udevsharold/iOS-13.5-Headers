/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HUGridCellLayoutOptions;


@protocol HUGridCellProtocol <NSObject,HUCellProtocol>
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden; 
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions; 
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@optional
-(BOOL)isRearranging;
-(void)setRearranging:(BOOL)arg1;

@required
+(Class)layoutOptionsClass;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(id)arg1;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1;

@end

