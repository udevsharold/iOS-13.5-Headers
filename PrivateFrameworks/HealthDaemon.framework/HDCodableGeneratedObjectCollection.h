/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying> {

	NSMutableArray* _accountOwners;
	NSMutableArray* _allergyRecords;
	NSMutableArray* _clinicalRecords;
	NSMutableArray* _conditionRecords;
	NSMutableArray* _diagnosticTestReports;
	NSMutableArray* _diagnosticTestResults;
	NSMutableArray* _medicationDispenseRecords;
	NSMutableArray* _medicationOrders;
	NSMutableArray* _medicationRecords;
	NSMutableArray* _procedureRecords;
	NSMutableArray* _unknownRecords;
	NSMutableArray* _vaccinationRecords;

}

@property (nonatomic,retain) NSMutableArray * medicationOrders;                       //@synthesize medicationOrders=_medicationOrders - In the implementation block
@property (nonatomic,retain) NSMutableArray * medicationDispenseRecords;              //@synthesize medicationDispenseRecords=_medicationDispenseRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * medicationRecords;                      //@synthesize medicationRecords=_medicationRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * diagnosticTestResults;                  //@synthesize diagnosticTestResults=_diagnosticTestResults - In the implementation block
@property (nonatomic,retain) NSMutableArray * diagnosticTestReports;                  //@synthesize diagnosticTestReports=_diagnosticTestReports - In the implementation block
@property (nonatomic,retain) NSMutableArray * vaccinationRecords;                     //@synthesize vaccinationRecords=_vaccinationRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * conditionRecords;                       //@synthesize conditionRecords=_conditionRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * allergyRecords;                         //@synthesize allergyRecords=_allergyRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * procedureRecords;                       //@synthesize procedureRecords=_procedureRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * accountOwners;                          //@synthesize accountOwners=_accountOwners - In the implementation block
@property (nonatomic,retain) NSMutableArray * unknownRecords;                         //@synthesize unknownRecords=_unknownRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * clinicalRecords;                        //@synthesize clinicalRecords=_clinicalRecords - In the implementation block
+(Class)medicationDispenseRecordType;
+(Class)medicationOrderType;
+(Class)accountOwnerType;
+(Class)unknownRecordType;
+(Class)allergyRecordType;
+(Class)procedureRecordType;
+(Class)diagnosticTestResultType;
+(Class)conditionRecordType;
+(Class)diagnosticTestReportType;
+(Class)medicationRecordType;
+(Class)vaccinationRecordType;
+(Class)clinicalRecordType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)procedureRecords;
-(void)addProcedureRecord:(id)arg1 ;
-(void)addVaccinationRecord:(id)arg1 ;
-(void)addDiagnosticTestReport:(id)arg1 ;
-(NSMutableArray *)diagnosticTestReports;
-(NSMutableArray *)medicationRecords;
-(void)addMedicationRecord:(id)arg1 ;
-(void)addClinicalRecord:(id)arg1 ;
-(NSMutableArray *)medicationOrders;
-(void)addMedicationOrder:(id)arg1 ;
-(NSMutableArray *)unknownRecords;
-(void)addUnknownRecord:(id)arg1 ;
-(void)addAllergyRecord:(id)arg1 ;
-(id)decodedObjects;
-(NSMutableArray *)medicationDispenseRecords;
-(NSMutableArray *)diagnosticTestResults;
-(NSMutableArray *)vaccinationRecords;
-(NSMutableArray *)conditionRecords;
-(NSMutableArray *)allergyRecords;
-(NSMutableArray *)accountOwners;
-(NSMutableArray *)clinicalRecords;
-(BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)arg1 ;
-(void)addMedicationDispenseRecord:(id)arg1 ;
-(void)addDiagnosticTestResult:(id)arg1 ;
-(void)addConditionRecord:(id)arg1 ;
-(void)addAccountOwner:(id)arg1 ;
-(unsigned long long)medicationOrdersCount;
-(void)clearMedicationOrders;
-(id)medicationOrderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)medicationDispenseRecordsCount;
-(void)clearMedicationDispenseRecords;
-(id)medicationDispenseRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)medicationRecordsCount;
-(void)clearMedicationRecords;
-(id)medicationRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)diagnosticTestResultsCount;
-(void)clearDiagnosticTestResults;
-(id)diagnosticTestResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)diagnosticTestReportsCount;
-(void)clearDiagnosticTestReports;
-(id)diagnosticTestReportAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vaccinationRecordsCount;
-(void)clearVaccinationRecords;
-(id)vaccinationRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)conditionRecordsCount;
-(void)clearConditionRecords;
-(id)conditionRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)allergyRecordsCount;
-(void)clearAllergyRecords;
-(id)allergyRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)procedureRecordsCount;
-(void)clearProcedureRecords;
-(id)procedureRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)accountOwnersCount;
-(void)clearAccountOwners;
-(id)accountOwnerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)unknownRecordsCount;
-(void)clearUnknownRecords;
-(id)unknownRecordAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)clinicalRecordsCount;
-(void)clearClinicalRecords;
-(id)clinicalRecordAtIndex:(unsigned long long)arg1 ;
-(void)setMedicationOrders:(NSMutableArray *)arg1 ;
-(void)setMedicationDispenseRecords:(NSMutableArray *)arg1 ;
-(void)setMedicationRecords:(NSMutableArray *)arg1 ;
-(void)setDiagnosticTestResults:(NSMutableArray *)arg1 ;
-(void)setDiagnosticTestReports:(NSMutableArray *)arg1 ;
-(void)setVaccinationRecords:(NSMutableArray *)arg1 ;
-(void)setConditionRecords:(NSMutableArray *)arg1 ;
-(void)setAllergyRecords:(NSMutableArray *)arg1 ;
-(void)setProcedureRecords:(NSMutableArray *)arg1 ;
-(void)setAccountOwners:(NSMutableArray *)arg1 ;
-(void)setUnknownRecords:(NSMutableArray *)arg1 ;
-(void)setClinicalRecords:(NSMutableArray *)arg1 ;
@end

