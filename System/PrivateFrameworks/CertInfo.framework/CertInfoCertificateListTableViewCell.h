/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class CertInfoCertificateListCellContentView;

@interface CertInfoCertificateListTableViewCell : UITableViewCell {

	CertInfoCertificateListCellContentView* _certificateContentView;

}
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateWithTrustDescription:(id)arg1 certificateIndex:(unsigned long long)arg2 ;
@end
