.include "../../share/mk/top.mk"

TEST.tests/pcre != ls -1 tests/pcre/out*.fsm
TEST_SRCDIR.tests/pcre = tests/pcre
TEST_OUTDIR.tests/pcre = ${BUILD}/tests/pcre

TEST.tests/pcre-pcregrep != ls -1 tests/pcre/out*.fsm
TEST_SRCDIR.tests/pcre-pcregrep = tests/pcre
TEST_OUTDIR.tests/pcre-pcregrep = ${BUILD}/tests/pcre-pcregrep

DIR += ${TEST_OUTDIR.tests/pcre-pcregrep}

RE=${BUILD}/bin/re
PCREGREP ?= pcregrep

.for n in ${TEST.tests/pcre-pcregrep:T:R:C/^out//}

${TEST_OUTDIR.tests/pcre-pcregrep}/in${n}.txt: ${TEST_SRCDIR.tests/pcre}/in${n}.re
	${RE} -mr pcre -y ${.ALLSRC:M*.re} \
	| perl -0pe 's/\n\Z//' \
	> $@

${TEST_OUTDIR.tests/pcre-pcregrep}/res${n}: ${TEST_OUTDIR.tests/pcre-pcregrep}/in${n}.txt
	${PCREGREP} -qxf ${TEST_SRCDIR.tests/pcre}/in${n}.re < ${.ALLSRC:M*.txt}; \
	if [ $$? -eq 0 ]; then echo PASS; else echo FAIL; fi \
	> $@

test:: ${TEST_OUTDIR.tests/pcre-pcregrep}/res${n}

.endfor

.for n in ${TEST.tests/pcre:T:R:C/^out//}

${TEST_OUTDIR.tests/pcre}/got${n}.fsm: ${TEST_SRCDIR.tests/pcre}/in${n}.re
	${RE} -r pcre -py ${.ALLSRC:M*.re} \
	> $@

${TEST_OUTDIR.tests/pcre}/nfa${n}.fsm: ${TEST_SRCDIR.tests/pcre}/in${n}.re
	${RE} -r pcre -n -py ${.ALLSRC:M*.re} \
	> $@

${TEST_OUTDIR.tests/pcre}/res${n}: \
	${TEST_SRCDIR.tests/pcre}/out${n}.fsm \
	${TEST_OUTDIR.tests/pcre}/got${n}.fsm

FSMTEST_RESULT += ${TEST_OUTDIR.tests/pcre}/res${n}

.endfor

.for n in ${TEST.tests/pcre:T:R:C/^out//}

${TEST_OUTDIR.tests/pcre}/nfa${n}.png: ${TEST_OUTDIR.tests/pcre}/nfa${n}.fsm
${TEST_OUTDIR.tests/pcre}/out${n}.png: ${TEST_SRCDIR.tests/pcre}/out${n}.fsm
${TEST_OUTDIR.tests/pcre}/got${n}.png: ${TEST_OUTDIR.tests/pcre}/got${n}.fsm

.for img in nfa${n} out${n} got${n}
FSMTEST_IMG += ${TEST_OUTDIR.tests/pcre}/${img}.png
.endfor

.endfor

