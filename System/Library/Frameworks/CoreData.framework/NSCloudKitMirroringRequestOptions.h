/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKOperationConfiguration;

@interface NSCloudKitMirroringRequestOptions : NSObject {

	CKOperationConfiguration* _operationConfiguration;

}

@property (nonatomic,retain) CKOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (assign,nonatomic) long long qualityOfService; 
@property (assign,nonatomic) BOOL allowsCellularAccess; 
-(id)init;
-(void)dealloc;
-(id)copy;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(void)resetOperationConfiguration;
-(void)setOperationConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)applyToOperation:(id)arg1 ;
-(CKOperationConfiguration *)operationConfiguration;
@end

