.include "../../share/mk/top.mk"

TEST.tests/minimise != ls -1 tests/minimise/out*.fsm
TEST_SRCDIR.tests/minimise = tests/minimise
TEST_OUTDIR.tests/minimise = ${BUILD}/tests/minimise

TEST.tests/minimise-rdrd != ls -1 tests/minimise/out*.fsm
TEST_SRCDIR.tests/minimise-rdrd = tests/minimise
TEST_OUTDIR.tests/minimise-rdrd = ${BUILD}/tests/minimise-rdrd

DIR += ${TEST_OUTDIR.tests/minimise-rdrd}

FSM=${BUILD}/bin/fsm

.for n in ${TEST.tests/minimise-rdrd:T:R:C/^out//}

${TEST_OUTDIR.tests/minimise-rdrd}/got${n}.fsm: ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
	  ${FSM} -pr ${.ALLSRC:M*.fsm} \
	| ${FSM} -pd \
	| ${FSM} -pr \
	| ${FSM} -pd \
	> $@

${TEST_OUTDIR.tests/minimise-rdrd}/rdr${n}.fsm: ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
	  ${FSM} -pr ${.ALLSRC:M*.fsm} \
	| ${FSM} -pd \
	| ${FSM} -pr \
	> $@

${TEST_OUTDIR.tests/minimise-rdrd}/rd${n}.fsm: ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
	  ${FSM} -pr ${.ALLSRC:M*.fsm} \
	| ${FSM} -pd \
	> $@

${TEST_OUTDIR.tests/minimise-rdrd}/r${n}.fsm: ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
	  ${FSM} -pr ${.ALLSRC:M*.fsm} \
	> $@

${TEST_OUTDIR.tests/minimise-rdrd}/res${n}: \
	${TEST_SRCDIR.tests/minimise-rdrd}/out${n}.fsm \
	${TEST_OUTDIR.tests/minimise-rdrd}/got${n}.fsm

FSMTEST_RESULT += ${TEST_OUTDIR.tests/minimise-rdrd}/res${n}

.endfor

.for n in ${TEST.tests/minimise:T:R:C/^out//}

${TEST_OUTDIR.tests/minimise}/got${n}.fsm: ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
	${FSM} -pm ${.ALLSRC:M*.fsm} \
	> $@

${TEST_OUTDIR.tests/minimise}/res${n}: \
	${TEST_SRCDIR.tests/minimise}/out${n}.fsm \
	${TEST_OUTDIR.tests/minimise}/got${n}.fsm

FSMTEST_RESULT += ${TEST_OUTDIR.tests/minimise}/res${n}

.endfor

.for n in ${TEST.tests/minimise:T:R:C/^out//}

${TEST_OUTDIR.tests/minimise-rdrd}/in${n}.png:   ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
${TEST_OUTDIR.tests/minimise-rdrd}/out${n}.png:  ${TEST_SRCDIR.tests/minimise}/out${n}.fsm
${TEST_OUTDIR.tests/minimise-rdrd}/rdr${n}.png:  ${TEST_OUTDIR.tests/minimise-rdrd}/rdr${n}.fsm
${TEST_OUTDIR.tests/minimise-rdrd}/rd${n}.png:   ${TEST_OUTDIR.tests/minimise-rdrd}/rd${n}.fsm
${TEST_OUTDIR.tests/minimise-rdrd}/r${n}.png:    ${TEST_OUTDIR.tests/minimise-rdrd}/r${n}.fsm
${TEST_OUTDIR.tests/minimise-rdrd}/got${n}.png:  ${TEST_OUTDIR.tests/minimise-rdrd}/got${n}.fsm

${TEST_OUTDIR.tests/minimise}/in${n}.png:   ${TEST_SRCDIR.tests/minimise}/in${n}.fsm
${TEST_OUTDIR.tests/minimise}/out${n}.png:  ${TEST_SRCDIR.tests/minimise}/out${n}.fsm
${TEST_OUTDIR.tests/minimise}/got${n}.png:  ${TEST_OUTDIR.tests/minimise}/got${n}.fsm

.for img in in${n} out${n} rdr${n} rd${n} r${n} got${n}
FSMTEST_IMG += ${TEST_OUTDIR.tests/minimise-rdrd}/${img}.png
.endfor

.for img in in${n} out${n} got${n}
FSMTEST_IMG += ${TEST_OUTDIR.tests/minimise}/${img}.png
.endfor

.endfor

