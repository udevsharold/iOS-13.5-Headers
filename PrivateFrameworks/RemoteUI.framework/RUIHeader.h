/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(id)headerLabel;
-(void)setIconImage:(id)arg1;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setImageAlignment:(int)arg1;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;

@end

