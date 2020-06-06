/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKConversationListStandardCell.h>
#import <libobjc.A.dylib/CKConversationSearchCellProtocol.h>

@class NSString;

@interface CKConversationListSearchCell : CKConversationListStandardCell <CKConversationSearchCellProtocol> {

	UIEdgeInsets _marginInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets marginInsets;              //@synthesize marginInsets=_marginInsets - In the implementation block
+(id)annotatedResultStringWithSearchText:(id)arg1 resultText:(id)arg2 primaryTextColor:(id)arg3 primaryFont:(id)arg4 annotatedTextColor:(id)arg5 annotatedFont:(id)arg6 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)fromLabel;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 ;
-(double)leadingLayoutMargin;
@end

